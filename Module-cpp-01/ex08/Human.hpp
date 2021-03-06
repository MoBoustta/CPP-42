/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/15 20:58:32 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
// =============================================================================

// PROTOTYPES ==================================================================
class Human;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Human
{
    private:
        void        meleeAttack(std::string const & target);
        void        rangedAttack(std::string const & target);
        void        intimidatingShout(std::string const & target);
    public:
        void        action(std::string const & action_name, std::string const & target);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif